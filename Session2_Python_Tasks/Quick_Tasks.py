# Quick Task1
# Find the largest item from a given list using loop
thislist = [10, 20, 4, 45, 99]
print("The Largest number of this list is: {}".format(max(thislist)))


# Quick Task2
# Write code to find automatically bitcoin rate using this API "http://api.coindesk.com/v1/bpi/currentprice.json"
import requests
url = requests.get("http://api.coindesk.com/v1/bpi/currentprice.json")
print(url.json()['bpi']['USD'])