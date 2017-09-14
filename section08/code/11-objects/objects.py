""" objects.py

    Demonstrating python classes

    Annaleah Ernst
    Week 8
    CS50 Fall 2017
    09/14/2017
"""

class anObject:
    """ The myObject class.
        
        Note that when using objects the first object to every method must be a 
        variable called self. This represents the current instantiation of the 
        method and allows us to work with class variables and class methods
    """
    
    def __init__(self):
        """ Initialize the myObject object. """
        
        # these are class variables I will have access to later
        # since they are uninitialized, I will set them to None
        self.var1 = None
        self.var2 = None

    def set_vars(self, myvar1, myvar2):
        """ Set class variables. """
        
        self.var1 = myvar1
        self.var2 = myvar2

    def print_vars(self):
        """ Print the current class variables. """
        
        if self.var1 is None or self.var2 is None:
            print("Object variables have not been set.")
        else:
            print("var1 is " + str(self.var1) + " and var2 is " + str(self.var2))

    def __str__(self):
        """ You can also override built in Python functions to react correctly to your object. 
        
            This function overrides the built in str() method so that your object
            is converted to a string nicely.
            
            Do be careful with mucking about with built in functions. The double underscores
            let you know that you are overriding something that already exists. In general,
            it is safer to avoid overriding when you are first starting out.
        """
        return ("var1 = " + str(self.var1) + ", var2 = " + str(self.var2))


if __name__ == "__main__":

    # create the object
    my_object = anObject()

    # print the object (this automatically calls the str() method)
    print(my_object)

    # use our method to print the object
    #   Note: when calling object methods, we DO NOT include the self argument
    #   self is implicit and internal to the object
    my_object.print_vars()

    # set the object variables
    #   Note: We DO need to specify any arguments to methods beyond self
    my_object.set_vars(3, "cats")
    my_object.print_vars()

    # note that object variables and function variables are not constrained by type
    my_object.set_vars(["fish", "Fish"], 3.241)
    my_object.print_vars()



