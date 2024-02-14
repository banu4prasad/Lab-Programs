let signup = document.querySelector(".signup");
let login = document.querySelector(".login");
let slider = document.querySelector(".slider");
let formSection = document.querySelector(".form-section");

signup.addEventListener("click", () => {
	slider.classList.add("moveslider");
	formSection.classList.add("form-section-move");
});

login.addEventListener("click", () => {
	slider.classList.remove("moveslider");
	formSection.classList.remove("form-section-move");
});



    function validateLogin() {
        var email = document.querySelector('.login-box .email').value;
        var password = document.querySelector('.login-box .password').value;
    
        if (email.trim() === '' || password.trim() === '') {
            alert('Please enter both email and password.');
            return false;
        }
        else {
            let clkbtn = document.querySelector(".clkbtn");

            // Adding a click event listener to the button
            clkbtn.addEventListener("click", () => {
                // Redirect to another page (replace 'your-target-page.html' with the actual URL)
                window.location.href = 'newpage.html';
            });
        }
    
            }
    
