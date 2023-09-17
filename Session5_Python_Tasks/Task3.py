# Task3
# Write a program in python that displays a windows to the user that asks them to enter an integer N 
# and display its factorial

import tkinter as tk
from tkinter import messagebox

def calculate_factorial():
    try:
        n = int(entry.get())
        if n < 0:
            messagebox.showerror("Error", "Please enter a non-negative integer.")
        else:
            result = 1
            for i in range(1, n + 1):
                result = result * i
            result_label.config(text=f"{n}! = {result}")
    except ValueError:
        messagebox.showerror("Error", "Please enter a valid integer.")


root = tk.Tk()
root.title("Factorial Calculator")
root.geometry("300x270+50+100")


instruction_label = tk.Label(root, text="Enter a value of N to calculate N!")
instruction_label.pack(pady=10)

entry = tk.Entry(root)
entry.pack(pady=5)

calculate_button = tk.Button(root, text="Calculate Factorial", command=calculate_factorial)
calculate_button.pack(pady=10)

result_label = tk.Label(root, text="")
result_label.pack()

root.mainloop()
