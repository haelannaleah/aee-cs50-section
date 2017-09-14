""" An example of a decorator function changing the behavior of the original """

def override(func):
    def incr():
        return func() + 1
    return incr

@override
def one():
    return 1

# prints 2, since its behavior has been overridden 
# (its return value has been increased by 1, thanks to `override()`)
print(one())