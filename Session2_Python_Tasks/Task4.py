# Task 4
# write python code using PyAutoGUI:
# - To open vscode 
# - install clangd from extension 
# - install c++ testmate from extension 
# - install c++ helper from extension 
# - install cmake from extension 
# - install cmake tools from extension

import pyautogui
import time

def run_command_in_terminal(command):
    pyautogui.write(command)  
    pyautogui.press("enter")  
    time.sleep(2) 

######### Open VS Code
pyautogui.press("super")
time.sleep(2)  
pyautogui.write("Visual Studio Code")
time.sleep(2)  
pyautogui.press("enter")
time.sleep(2)
#########

######### install VS Code extensions 
pyautogui.hotkey("ctrl", "alt", "t")
time.sleep(5) 
run_command_in_terminal("code --install-extension llvm-vs-code-extensions.vscode-clangd ;" 
                        "code --install-extension matepek.vscode-catch2-test-adapter ;"
                        "code --install-extension amiralizadeh9480.cpp-helper ;"
                        "code --install-extension twxs.cmake ;"
                        "code --install-extension ms-vscode.cmake-tools")
