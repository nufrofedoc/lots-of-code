var reverseText = document.getElementById("longwords");
var inputString = document.getElementById("input");

function findLongestWords(str) {
    //return str.split(" ").sort(function(a, b) {return b.length- a.length})[0];

    var words = str.split(" ");
    var longest = "";

    for (var word of words) {
        if (word.length > longest.length) longest = word;
    }
    return longest.length;
}

function input() {
    reverseText.innerHTML = findLongestWords(inputString.value);
}
