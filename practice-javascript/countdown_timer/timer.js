var counter = 0;
var timeLeft = 60;

function convertSeconds(s) {
    let min = Math.floor(s / 60);
    let sec = s % 60;

    return '0' + min + ':' + sec;
}

function soundPlay() {
    let audio = new Audio();
    audio.src = "ding.mp3";
    audio.play();
}

function setup() {
    let getParams = function(url) {
        let params = {},
            parser = document.createElement('a');
        parser.href = url;
        let query = parser.search.substring(1),
            vars  = query.split('&');
        for (let i = 0; i < vars.length; i++) {
            let pair = vars[i].split('=');
            params[pair[0]] = decodeURIComponent(pair[1]);
        }
        return params;
    }

    let params = getParams(window.location.href);

    if (params.minute) {
        let min = params.minute;
        timeLeft = min * 60;
    }

    let timer = document.getElementById('timer');
    timer.innerHTML = convertSeconds(timeLeft - counter);

    let interval = setInterval(timeIt, 1000);

    function timeIt() {
        counter++;
        timer.innerHTML = convertSeconds(timeLeft - counter);
        if (counter == timeLeft) {
            soundPlay();
            clearInterval(interval);
            //counter = 0;
        }
    }
}

setup();
