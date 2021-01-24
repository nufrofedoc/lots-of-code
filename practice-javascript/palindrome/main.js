var reverseText = document.getElementById("palindrome");
var inputString = document.getElementById("input");

function palindrome(str) {
    var reg = /[\W_]/g;

    var smallStr = str.toLowerCase().replace(reg, "");

    var reversed = smallStr.split("").reverse().join("");
    if (reversed === smallStr) return true;

    return false;
}

function input() {
    reverseText.innerHTML = palindrome(inputString.value);
}
