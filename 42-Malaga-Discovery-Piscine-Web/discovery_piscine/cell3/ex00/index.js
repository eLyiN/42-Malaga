const button = document.getElementById('button');

button.addEventListener('click', function onClick(event) {
    random_bg_color();
});

function random_bg_color() {
    var x = Math.floor(Math.random() * 256); 
    var y = Math.floor(Math.random() * 256); 
    var z = Math.floor(Math.random() * 256);
    var randombgColor = "rgb("+ x + "," + y + "," + z + ")";
    console.log(randombgColor);
    document.body.style.backgroundColor = randombgColor;
}