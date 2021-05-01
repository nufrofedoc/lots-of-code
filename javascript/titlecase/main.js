var title = document.getElementById("title");
var inputString = document.getElementById("input");

// function titleCase(str) {
//     var words = str.toLowerCase().split(" ");
//     for (var i = 0; i < words.length; i++) {
//         words[i] = words[i][0].toUpperCase + words[i].slice(1);
//     }
//     return words.join(" ");
// }

function titleCase(str) {
    var title = str.toLowerCase().split(" ").map(function(elem) {
        return elem[0].toUpperCase() + elem.slice(1);
    });

    return title.join(" ");
}

function input() {
    title.innerHTML = titleCase(inputString.value);
}
