from flask import Flask

app = Flask(__name__)

@app.route("/")
def index():
    return "You are at the beginning!"
    
