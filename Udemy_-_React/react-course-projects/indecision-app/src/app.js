console.log('app.js has loaded')

// JSX - JavaScript XML
const template = (
<div>
    <h1>Indecision App</h1>
    <p>This is some info.</p>
</div>);

const appRoot = document.getElementById("app");

const templateTwo = (
    <div>
        <h2>Joseph Kligel</h2>
        <p>Age: 29</p>
        <p>Location: Memphis</p>
    </div>
);

ReactDOM.render(templateTwo, appRoot)
