#!/bin/bash

# Task2
# Write bash script to generate systemd service file simple example


# Check if a service name is provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <service_name>"
    exit 1
fi

# Set service name
service_name=$1

# Set service file path
service_file="/etc/systemd/system/$service_name.service"

# Check if the service file already exists
if [ -e "$service_file" ]; then
    echo "Error: Service file '$service_file' already exists."
    exit 1
fi

# Create the service file
cat > "$service_file" <<EOL
[Unit]
Description=$service_name Service
After=network.target

[Service]
ExecStart=/bin/bash -c 'echo Hello from $service_name'

[Install]
WantedBy=multi-user.target
EOL

# Inform the user about the created service file
echo "Service file '$service_file' created successfully."

# Reload systemd to pick up the new service file
sudo systemctl daemon-reload

# Start and enable the service
sudo systemctl start "$service_name"
sudo systemctl enable "$service_name"

echo "Service '$service_name' started and enabled."
