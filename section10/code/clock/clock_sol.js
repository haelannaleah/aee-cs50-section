// get our clock div
var clock = document.getElementById('clock');

// update at intervals
setInterval(function() {
    // update current time
    var date = new Date();
    var html = '<h1>' + date.getHours() + ':' + date.getMinutes() + ':' + date.getSeconds() +'</h1>'
    clock.innerHTML = html;
    
}, 100);