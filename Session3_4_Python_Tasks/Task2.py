# Task 2
# Use PyAutoGUI to open Emails and change Emails from unread to read

import win32com.client

# Create an instance of the Outlook application
outlook = win32com.client.Dispatch("Outlook.Application")

# Get the MAPI namespace
namespace = outlook.GetNamespace("MAPI")

# Get the inbox folder
inbox = namespace.GetDefaultFolder(6)  # 6 corresponds to the Inbox folder

# Get the unread emails
unread_items = inbox.Items.Restrict("[Unread] = True")

# Mark each unread email as read
for item in unread_items:
    item.UnRead = False
    item.Save()

