"use strict";

console.log('app.js has loaded');

// JSX - JavaScript XML
var template = React.createElement(
    "div",
    null,
    React.createElement(
        "h1",
        null,
        "Indecision App"
    ),
    React.createElement(
        "p",
        null,
        "This is some info."
    )
);

var appRoot = document.getElementById("app");

var templateTwo = React.createElement(
    "div",
    null,
    React.createElement(
        "h2",
        null,
        "Joseph Kligel"
    ),
    React.createElement(
        "p",
        null,
        "Age: 29"
    ),
    React.createElement(
        "p",
        null,
        "Location: Memphis"
    )
);

ReactDOM.render(templateTwo, appRoot);
