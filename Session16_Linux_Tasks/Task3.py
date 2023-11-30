# Task3:
# Create task run every half hour to check battery value and report if it full or not
import psutil
from datetime import datetime
import smtplib
from email.mime.text import MIMEText

def get_battery_status():
    battery = psutil.sensors_battery()
    percent = battery.percent
    return percent

def send_notification(subject, body):

    sender_email = "my_email@gmail.com"
    sender_password = "my_email_password"
    recipient_email = "friend_email@example.com"

    # Create the email message
    message = MIMEText(body)
    message["Subject"] = subject
    message["From"] = sender_email
    message["To"] = recipient_email

    # Connect to the SMTP server
    with smtplib.SMTP("smtp.gmail.com", 587) as server:
        server.starttls()
        server.login(sender_email, sender_password)
        server.sendmail(sender_email, recipient_email, message.as_string())

def main():
    battery_percent = get_battery_status()
    current_time = datetime.now().strftime("%Y-%m-%d %H:%M:%S")

    if battery_percent == 100:
        send_notification("Battery Full", f"The battery is full at {current_time}.")
    else:
        send_notification("Battery Status", f"The battery is at {battery_percent}% at {current_time}.")

if __name__ == "__main__":
    main()


# After that we will write this commands in terminal:
#   crontab -e
#   */30 * * * * ../Task3.py


