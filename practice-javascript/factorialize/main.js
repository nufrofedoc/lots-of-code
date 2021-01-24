var fact = document.getElementById("fact");

function factorialize(num) {
    var result = 1;
    for (var i=1; i<=num; i++) {
        // result = result * i;
        result *= i;
    }
    return result;
}

var result = factorialize(5);
console.log(result);
fact.innerHTML = result;
