import sqlite3
import sys

file_name = "address_book.db"

conn = sqlite3.connect(file_name)
cur = conn.cursor()

cur.execute('''CREATE TABLE IF NOT EXISTS contacts 
             (name text, phone text, email text, notes text)''')


def add(cur):
    name = input("Enter contact name: ")
    phone = input("Enter phone number: ")
    email = input("Enter email address: ")
    note = input("Enter any additional notes: ")

    cur.execute("insert into contacts values (?, ?, ?, ?)", (name, phone, email, note))
    conn.commit()
    print("Contact added")


def remove(cur):
    query = input("Enter name of contact to delete: ")
    cur.execute("DELETE FROM contacts WHERE name=?", (query,))
    conn.commit()
    print("Contact removed")


def view(cur):  # view all contacts
    for contact in cur.execute("SELECT * FROM contacts ORDER BY name"):
        print_contact(contact)
        print()


def search(cur):
    query = input("Search for who? ")
    for contact in cur.execute("SELECT * FROM contacts WHERE name=?", (query,)):
        print_contact(contact)


def print_contact(info):
    print(info[0])
    print('Phone: {}'.format(info[1]))
    print('Email: {}'.format(info[2]))
    print('Notes: {}'.format(info[3]))


def main():


    option = ''
    while option not in ['1','2','3','4','5']:
        print("Choose an option:")
        print("1) add contact\n2) remove contact\n3) view contacts\n4) search\n5) exit")
        option = input("> ")

    if option == '1':
        add(cur)
    elif option == '2':
        remove(cur)
    elif option == '3':
        view(cur)
    elif option == '4':
        search(cur)
    elif option == '5':
        sys.exit()



if __name__ == "__main__":
    main()