encodedRecipe = '66b85b69b84b67b84b70b123b36b112b51b108b108b98b48b48b107b95b111b102b95b51b110b99b104b97b110b55b51b100b95b99b48b48b107b105b101b115b95b56b50b100b101b100b52b53b101b51b125b'
function decodeDelight(encodedRecipe) {
    let finalDish = "";
    let ingredientArray = encodedRecipe.split("b");
    ingredientArray.pop();
    const flavorBits = ingredientArray.map(ingredient => parseInt(ingredient, 10));

    for (let flavorCode of flavorBits) {
        finalDish += String.fromCharCode(flavorCode);
    }
    console.log(finalDish);
    return finalDish;
}