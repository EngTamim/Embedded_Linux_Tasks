# Quick Task2
# write a program that asks the user to type a word and return him its reverse

import tkinter as tk

# Function to reverse a word and update the result label
def reverse_word():
    input_word = entry.get()
    reversed_word = input_word[::-1]
    result_label.config(text=f"{reversed_word}")

# Create the main application window
root = tk.Tk()
root.title("Word Reversal App")
root.geometry("300x160+50+100")


# Create a label and an entry widget for input
label = tk.Label(root, text="Enter a word:")
label.pack(pady=10)

entry = tk.Entry(root)
entry.pack(pady=5)

# Create a button to reverse the word
button = tk.Button(root, text="Reverse", command=reverse_word)
button.pack(pady=10)

# Create a label to display the result
result_label = tk.Label(root, text="")
result_label.pack()

# Start the main event loop
root.mainloop()
