# Task1
# Humidity Gauge

import tkinter as tk

root = tk.Tk()
root.title("Humidity Gauge")
root.canvas = tk.Canvas(root, width=300, height=300, bg="white")

root.canvas.create_arc(50, 50, 250, 250, start=20, extent=140, outline="black", width=5)
root.canvas.create_arc(50, 50, 250, 250, start=80, extent=80,outline="black", width=2, fill="green")
root.canvas.create_arc(50, 50, 250, 250, start=50, extent=30,outline="black", width=2, fill="yellow")
root.canvas.create_arc(50, 50, 250, 250, start=20, extent=30,outline="black", width=2, fill="red")

root.needle = root.canvas.create_line(90, 90, 150, 150, fill="black", width=5)

tk.Label(root,text = 'Humidity',fg = 'grey',bg = 'white')

root.canvas.create_text(150, 160, text="17%")
root.canvas.create_text(50, 125, text="0")
root.canvas.create_text(250, 125, text="100")

root.canvas.pack()

root.mainloop()
