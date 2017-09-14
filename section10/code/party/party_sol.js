// based on previous CS50 sections

// make sure capitalization is correct!
// get element that we will change the background of
var background = document.getElementById('background');

// get our element we want to interact with
var button = document.getElementById('party');

// make the interactions happen
button.onclick = function () {
    // generate a random color via random rgb triple
    // use Math.random to do get a value between 0 and 1
    // use Math.floor to get the nearest integer
    var red = Math.floor(Math.random() * 255);
    var blue = Math.floor(Math.random() * 255);
    var green = Math.floor(Math.random() * 255);
    
    // change the background (stored in elt called background)
    background.style.background = 'rgb(' + red + ',' + blue + ',' + green + ')';
};
console.log('Hello');
