# Task4:
# Create task to run on 1/1 every year at 12:00 sending message to whatsapp with happy anniversary


from twilio.rest import Client
from datetime import datetime

# Twilio credentials
account_sid = "your_twilio_account_sid"
auth_token = "your_twilio_auth_token"
twilio_phone_number = "whatsapp:+14155238886"  # Twilio's WhatsApp number

# My friend  WhatsApp number
recipient_whatsapp_number = "whatsapp:+905512223344" 

def send_whatsapp_message(message):
    client = Client(account_sid, auth_token)
    message = client.messages.create(
        body=message,
        from_=twilio_phone_number,
        to=recipient_whatsapp_number
    )
    print(f"Message sent with SID: {message.sid}")

def main():
    # Check if today is the 1st of January
    today = datetime.now()
    if today.month == 1 and today.day == 1:
        # Send anniversary message
        send_whatsapp_message("Happy Anniversary!")

if __name__ == "__main__":
    main()


# After that we will run this commands in terminal:
#     crontab -e
#     0 12 1 1 * ../Task4.py


