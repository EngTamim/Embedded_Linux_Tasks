# Task1
# Make your module that contain favorite websites and have function called Firefox take url and open website
# make file and print menu of sites for user and let him choice

import webbrowser


favorite_websites = {
    "Google": "https://www.google.com",
    "Youtube": "https://www.youtube.com",
    "Facebook": "https://www.facebook.com"
}

def open_favorite_website(name):
    if name in favorite_websites:
        webbrowser.get('firefox').open(favorite_websites[name])
    else:
        print(f"{name} is not in your favorites.")

def print_favorite_websites():
    print("\nFavorite Websites:")
    for name in favorite_websites:
        print(name)

if __name__ == "__main__":
    while True:
        print("\nMenu:")
        print("1. Open a favorite website")
        print("2. Show favorite websites")
        print("3. Quit")

        choice = input("Enter your choice (1/2/3): ")

        if choice == "1":
            print_favorite_websites()
            name = input("Enter the name of the website you want to open: ")
            open_favorite_website(name)
        elif choice == "2":
            print_favorite_websites()
        elif choice == "3":
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Please choose a valid option (1/2/3).")
