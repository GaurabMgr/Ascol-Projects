print("Gaurab Ale Magar")
import re
text = "The children were playing happily in the gardens, and they enjoyed running quickly!"
STOP = {"the", "a", "an", "and", "in", "on", "at", "of", "to", "were", "was", "is", "are", "they", "it"}

def stem(w):                                  # simple suffix-stripping stemmer
    for suf in ("ing", "ly", "ed", "es", "s"):
        if w.endswith(suf) and len(w) - len(suf) >= 3:
            w = w[:-len(suf)]; break
    return w[:-1] if len(w) > 2 and w[-1] == w[-2] and w[-1] not in "ls" else w

tokens = re.findall(r"[a-z]+", text.lower())              # tokenization
filtered = [t for t in tokens if t not in STOP]           # stop-word removal
print("Tokens   :", tokens)
print("Filtered :", filtered)
print("Stemmed  :", [stem(t) for t in filtered])

