var ending = document.getElementById("output");
var inputString = document.getElementById("input");

function repeatStringNumTimes(str, num) {
    // repeat after me
    // if (num < 0) return "";
    // return str.repeat(num);

    // var final = "";
    // if (num < 0) return "";

    // for (var i=0; i<num; i++) {
    //     final += str;
    // }

    // return final;

    if (num < 0) return "";
    if (num === 1) return str;  // base case

    return str + repeatStringNumTimes(str, num -1)
}

function input() {
    ending.innerHTML = repeatStringNumTimes(inputString.value, 3);
}
