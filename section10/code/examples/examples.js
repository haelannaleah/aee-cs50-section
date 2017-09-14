/**********************/
/* logging and alerts */
/**********************/
console.log('hello world')
alert('hello world')

/********************/
/* the type section */
/********************/

// of the form var <variable_name> = <value>;

// declare an int
var age = 20;

// declare an array
var an_array = [1,2,3,4,5];

// declare a string
var a_str = "Party party party";

// global, but prefered syntax uses var name outside all functions
// ie, don't do this
c = "hi";

// make some changes
var b = true;
console.log("Type of b: " + typeof(b));
b = "make b a string";
console.log("Type of b: " + typeof(b));
console.log(Number('2'));


/********************/
/* the loop section */
// ******************


for(var i = 0;i < 10; i++){
    // code
}

var g = 20;
while(g < 15){
    // code
}

do {
    // code
} while (g > 20);

/************************/
/* The function section */
/************************/

// c-like function
function sum(x,y)
{
    return x + y;
}

// an anonymous function
// note: these are more obviously useful for click events, etc
var var_sum = function(x,y){
    return x + y;
}

console.log('3 + 5 is ' + sum(3,5));
console.log('2 + 1 is ' + var_sum(2,1));

/*********************/
/* The array section */
/*********************/

// decare an empty array
var arr = [];

// literal array with 3 elements
var arr2 = ["Arrays", "in", "js"];
var thirdelt = arr2[2];

console.log("third elt of arr2: " + thirdelt);

var arr2len = arr2.length;
console.log("length elt of arr2: " + arr2len);

var arr3 = [2.3, true, 5];
arr3[2] = "not a number";
arr3[100] = "legit";

console.log(arr3[10]);

/**********************/
/* The object section */
/**********************/

// an empty object
var myObject = {}

// two ways to create properties
myObject["aProperty"] = "aValue";
myObject.anotherProp = "anotherVal";

// two ways to retrieve
console.log(myObject.aProperty);
console.log(myObject["aProperty"]);

// making a full object!
var CS50 = {
    "course" : "CS50",
    "instructor" : "djm",
    "tfs" : ["Annaleah", "Walter", "Thomas"],
    "psets" : 8,
    "taped" : true
}

console.log(CS50.course);
console.log(CS50.tfs[2]);

for (key in CS50) 
{
    console.log(key);
    console.log(CS50[key]);
}

// array of objects
var homes = [
    {name: "Annaleah", house: "Eliot"},
    {name: "Walter", house: "Quincy"}
];

for (var i = 0; i < homes.length; i++)
{
    console.log(homes[i].name);
}
