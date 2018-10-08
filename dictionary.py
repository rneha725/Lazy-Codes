import Tkinter as tk;
import tkMessageBox;
import webbrowser;
new = 0;

def openURLs(event):
	word  = inputArea.get();

	if(variable.get() == 'Word'):
		url1 = "https://www.vocabulary.com/dictionary/" + word;
		url2 = "http://www.mnemonicdictionary.com/word/" + word;
		webbrowser.open(url1, new=new);
		webbrowser.open(url2, new=new);
	elif(variable.get() == 'Site'):
		url = "www." + word.lower() + '.com';
		webbrowser.open(url, new=new);
	inputArea.delete(0, 'end');

root = tk.Tk();

wordLabel = tk.Label(root, text="Enter Word:")
wordLabel.grid(row=1, column=1);
wordLabel.pack();
inputArea = tk.Entry(root, bd = 5);
inputArea.grid(row=1, column=2);
inputArea.focus();
inputArea.pack();

options = ['Word','Site'];
variable = tk.StringVar();
variable.set('Word');
dropDown = tk.OptionMenu(root,variable,*options);
dropDown.pack();
# variable.trace("w", dropDownChanged); # to respond when value changed!

root.minsize(width=500, height=150);
root.bind('<Return>', openURLs);
root.mainloop();