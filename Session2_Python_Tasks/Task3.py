# Task 3 
# Get Your Location from this link (http://ip-api.com/json/<YOUR IP>)

import requests

response = requests.get("http://api.ipify.org/?format=json")
if response.status_code == 200:
    data = response.json()
    myIP = data.get("ip")

response = requests.get(f"http://ip-api.com/json/{myIP}")
if response.status_code == 200:
    data = response.json()
    city = data.get("city")
    region = data.get("regionName")
    country = data.get("country")
    print(f"Your public IP address: {myIP}")
    print(f"Location: {city}, {region}, {country}")



