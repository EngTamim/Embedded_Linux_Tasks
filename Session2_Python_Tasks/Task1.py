# Task1
import webbrowser

url = input("Enter the website you want to open: ")
my_browser = webbrowser.get("firefox")
my_browser.open(url)