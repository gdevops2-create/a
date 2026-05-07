class Book:

    def __init__(self, title, author, isbn, price, qty):
        self.title = title
        self.author = author
        self.isbn = isbn
        self.price = price
        self.qty = qty

    # getters
    def get_title(self):
        return self.title

    def get_price(self):
        return self.price

    def get_qty(self):
        return self.qty

    # setters
    def set_price(self, price):
        self.price = price

    def set_qty(self, qty):
        self.qty = qty

    # display
    def display(self):
        print("\nBook Details")
        print("Title:", self.title)
        print("Author:", self.author)
        print("ISBN:", self.isbn)
        print("Price:", self.price)
        print("Quantity:", self.qty)

    # update quantity
    def update_qty(self, new_qty):
        if new_qty >= 0:
            self.qty = new_qty
            print("Quantity updated")
        else:
            print("Invalid quantity")

    # sell book
    def sell(self, amount):
        if amount <= self.qty:
            self.qty -= amount
            print(amount, "books sold")
        else:
            print("Not enough stock")


# objects
b1 = Book("Python", "John", "101", 500, 10)
b2 = Book("DSA", "Alice", "102", 600, 5)

# operations
b1.display()
b2.display()

print("\nGetter Title:", b1.get_title())

b1.set_price(550)
print("Updated Price:", b1.get_price())

b1.sell(3)
b1.display()