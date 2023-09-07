# Quick Task3
# Create a graphical application in python Tkinter that asks the user to enter two integers and display their sum

import tkinter as tk

# Function to calculate the result based on the selected operation
def calculate_result():
    try:
        num1 = int(entry1.get())
        num2 = int(entry2.get())
        if operation.get() == "sum":
            result_label.config(text=f"The Sum of {num1} and {num2} is {num1 + num2}")
        elif operation.get() == "subtract":
            result_label.config(text=f"The Sub of {num1} and {num2} is {num1 - num2}")
        
    except ValueError:
        result_label.config(text="Invalid input. Please enter integers.")

# Create the main application window
root = tk.Tk()
root.title("Sum/Sub of Two Integers")
root.geometry("300x270+50+100")

# Create labels and entry widgets for input
label1 = tk.Label(root, text="Enter the first integer:")
label1.pack(pady=5)

entry1 = tk.Entry(root)
entry1.pack(pady=5)

label2 = tk.Label(root, text="Enter the second integer:")
label2.pack(pady=5)

entry2 = tk.Entry(root)
entry2.pack(pady=5)

# Create radio buttons for operation selection
operation = tk.StringVar()
operation.set("sum")  # Default selection
sum_radio = tk.Radiobutton(root, text="Sum", variable=operation, value="sum")
subtract_radio = tk.Radiobutton(root, text="Subtract", variable=operation, value="subtract")
sum_radio.pack()
subtract_radio.pack()

# Create a button to calculate the result
calculate_button = tk.Button(root, text="Validate", command=calculate_result)
calculate_button.pack(pady=10)

# Create a label to display the result
result_label = tk.Label(root, text="")
result_label.pack()

# Start the main event loop
root.mainloop()
