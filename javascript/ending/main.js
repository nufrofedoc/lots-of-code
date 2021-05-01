var ending = document.getElementById("output");
var inputString = document.getElementById("input");

function confirmEnding(str, target) {
    // if (str.endsWith(target)) {
    //     return true;
    // }
    // return false;

    // return str.endsWith(target);

    if (str.substr(-target.length) === target) {
        return true;
    }
    return false;

    // return str.substr(-target.length) === target;
    // return str.slice(-target.length) === target;
}

// confirmEnding("Bastian", "n");

function input() {
    ending.innerHTML = confirmEnding(inputString.value, "n");
}
