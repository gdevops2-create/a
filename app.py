from flask import Flask, render_template, request
import sqlite3

app = Flask(__name__)

# Create database table 
conn = sqlite3.connect("profile.db")
cur = conn.cursor()

cur.execute("""
CREATE TABLE IF NOT EXISTS profile(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT,
    email TEXT,
    age INTEGER
)
""")

conn.commit()
conn.close()


@app.route("/", methods=["GET", "POST"])
def home():
    if request.method == "POST":
        name = request.form["name"]
        email = request.form["email"]
        age = request.form["age"]

        conn = sqlite3.connect("profile.db")
        cur = conn.cursor()

        cur.execute(
            "INSERT INTO profile(name,email,age) VALUES(?,?,?)",
            (name, email, age)
        )

        conn.commit()
        conn.close()

    conn = sqlite3.connect("profile.db")
    cur = conn.cursor()

    cur.execute("SELECT * FROM profile")
    data = cur.fetchall()

    conn.close()

    return render_template("index.html", data=data)


if __name__ == "__main__":
    app.run(debug=True)

#pip install flask,python -m pip install flask    
