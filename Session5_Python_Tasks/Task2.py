# Task2
# Led_on Led_off Task

import tkinter as tk

def Led_On():
    canvas.itemconfig(circle, fill="red")
    status_label.config(text="LED is ON")

def Led_Off():
    canvas.itemconfig(circle, fill="white")
    status_label.config(text="LED is OFF")

root = tk.Tk()
root.title("LED On/Off")

canvas = tk.Canvas(root, width=200, height=200)
canvas.pack()

circle = canvas.create_oval(50, 50, 150, 150, fill="white")

status_label = tk.Label(root, text="LED is OFF", font=("Helvetica", 14))
status_label.pack(pady=10)

# Create a LED ON button 
LED_ON_button = tk.Button(root, text="Turn ON the LED", command=Led_On)
LED_ON_button.pack(pady=10)

# Create a LED OFF button
LED_OFF_button = tk.Button(root, text="Turn OFF the LED", command=Led_Off)
LED_OFF_button.pack(pady=10)

root.mainloop()
