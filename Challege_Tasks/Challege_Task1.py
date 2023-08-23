import pyperclip
import keyboard

def on_triggered():
    with open('notes.txt', 'a') as t:
        t.write(pyperclip.paste()+ '\n')
 
keyboard.add_hotkey('alt+shift+s',on_triggered)
keyboard.wait()
