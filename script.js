const button = document.querySelector("#button");

button.addEventListener("click", newColor);

function newColor() {
    var r = Math.floor(Math.random() * 256);
    var g = Math.floor(Math.random() * 256);
    var b = Math.floor(Math.random() * 256);

    grayBackground(r, g, b);
}

function grayBackground(r, g, b) {
    if (r == 128 && g == 128 && b == 128) {
        button.style.backgroundColor = `rgb(${r},${g},${b})`;
        alert("Is gray!")
        console.log(g)
    } else {
        newColor();
    }
}

newColor();