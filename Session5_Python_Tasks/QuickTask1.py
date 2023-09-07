# Quick Task1
# Make this template and each button display different name

import tkinter as tk

 # Create the main application window
root = tk.Tk()
root.title("Grid of Buttons")
button_frame = tk.Frame(root)
button_frame.pack(fill="both", expand=True)
Num = 0
for i in range(6):
    for j in range(6):
        if (i==0 and j==1) or (i==1 and j==2) or (i==2 and j==1) or (i==1 and j==0):
            Num = Num + 1
            button = tk.Button(button_frame, text=f"Button{Num}")
            button.grid(row=i, column=j, sticky="nsew")

root.mainloop()
