document.addEventListener("DOMContentLoaded", () => {
  const searchBar = document.getElementById("searchBar");
  const animeCards = document.querySelectorAll(".anime-card");

  searchBar.addEventListener("input", (e) => {
    const searchTerm = e.target.value.toLowerCase();

    animeCards.forEach(card => {
      const title = card.querySelector(".anime-title").textContent.toLowerCase();
      if (title.includes(searchTerm)) {
        card.style.display = "block";
      } else {
        card.style.display = "none";
      }
    });
  });
});
