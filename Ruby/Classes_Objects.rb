# Perfect Object Orientated Programming Language. The feature of the OOP:
# Data Encaps, Data abstraction, Polymorphism, Inheritance.

# Global Variable
$global_variable = 0x10110111

class Customer

    # Contants
    VAR1 = 100
    VAR2 = 200
    # Class variable
    @@no_of_customers = 0

    def initialize(id, name, addr)
        @@no_of_customers += 1
        # instance variables
        @cust_id = id
        @cust_name = name
        @cust_addr = addr
    end

    def display_details()
        puts "Global Variable is #$global_variable"
        puts "Customer id #@cust_id"
        puts "Customer address #@cust_addr"
        puts "Number of Customers #@@no_of_customers"
        puts "Value of first and second constant is #{VAR1} and #{VAR2}"
        puts "Multiplication Value: #{24*60*60}"
        puts "Hello World"
    end
end

# Object creation
cust1 = Customer.new("1", "John", "Wisdom Apartments, Ludhiya")
cust2 = Customer.new("2", "Poul", "New Empire road, Khandala")
cust1.display_details
cust2.display_details