const doc = document;
const form = doc.querySelector("form");
const h2 = doc.querySelector("h2");

form.addEventListener("submit", (e) =>{
let idade = Number(doc.getElementById("inIdade").value);
console.log(idade);

const texto = idade >= 18 ? "maior" : "menor";
console.log(texto);

h2.innerText = texto;

e.preventDefault();

})