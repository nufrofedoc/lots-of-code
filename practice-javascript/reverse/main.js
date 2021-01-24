var reverseText = document.getElementById("reverse");
var inputString = document.getElementById("input");

function reverseString(str) {
    // var strArr = str.split("");
    // var reverseStrArray = strArr.reverse();
    // var reverseString = reverseStrArray.join("");
    // return reverseString;

    // return str.split("").reverse().join("");

    var final = "";
    for (var i = str.length - 1; i >= 0; i--) {
        final += str[i];
    }
    return final;
}

function input() {
    reverseText.innerHTML = reverseString(inputString.value);
}
