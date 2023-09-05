# Task2
# Write a code to suggest automatically activates for you

import requests

def get_random_activity():
 
    response = requests.get("https://www.boredapi.com/api/activity")

    # Check if the request was successful (status code 200)
    if response.status_code == 200:
        data = response.json()
        activity = data.get("activity")
        if activity:
            return activity
        else:
            return "No activity found."
    else:
        return "Failed to fetch activity. Please try again later."


while True:
    input("Press Enter for a random activity suggestion...")
    suggestion = get_random_activity()
    print("Here's a suggestion for you:")
    print(suggestion)


