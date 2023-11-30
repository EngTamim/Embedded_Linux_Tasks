# Task2:
# Create task to run python script which sending an email to friend with report of uptime every sunday at 9:00 am

import smtplib
from email.mime.text import MIMEText
import datetime
import platform

def send_email(subject, body):
    # Replace the following placeholders with your email and password
    sender_email = "my_email@gmail.com"
    sender_password = "my_email_password"
    recipient_email = "my_friend_email@example.com"

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
    # Get system information
    system_info = f"System: {platform.system()} {platform.version()}\n"
    uptime_info = f"Uptime: {datetime.datetime.now() - datetime.datetime.fromtimestamp(platform.boot_time())}"

    # Compose email subject and body
    subject = "Weekly Uptime Report"
    body = f"{system_info}\n{uptime_info}"

    # Send the email
    send_email(subject, body)

if __name__ == "__main__":
    main()

# then we will write in the terminal:
#   crontab -e
#   0 9 * * 0 ../myPath/Task2.py

