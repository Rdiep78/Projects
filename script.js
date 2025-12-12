// GTM Strategy Dashboard - Interactive Navigation

document.addEventListener('DOMContentLoaded', function() {
    // Get all navigation links and sections
    const navLinks = document.querySelectorAll('.nav-link');
    const sections = document.querySelectorAll('.strategy-section');

    // Function to switch between sections
    function switchSection(targetSection) {
        // Remove active class from all links and sections
        navLinks.forEach(link => link.classList.remove('active'));
        sections.forEach(section => section.classList.remove('active'));

        // Add active class to clicked link and corresponding section
        const activeLink = document.querySelector(`[data-section="${targetSection}"]`);
        const activeSection = document.getElementById(targetSection);

        if (activeLink && activeSection) {
            activeLink.classList.add('active');
            activeSection.classList.add('active');

            // Smooth scroll to top
            window.scrollTo({
                top: 0,
                behavior: 'smooth'
            });
        }
    }

    // Add click event listeners to navigation links
    navLinks.forEach(link => {
        link.addEventListener('click', function(e) {
            e.preventDefault();
            const targetSection = this.getAttribute('data-section');
            switchSection(targetSection);

            // Update URL hash without jumping
            history.pushState(null, null, `#${targetSection}`);
        });
    });

    // Handle browser back/forward buttons
    window.addEventListener('popstate', function() {
        const hash = window.location.hash.slice(1);
        if (hash) {
            switchSection(hash);
        } else {
            switchSection('messaging');
        }
    });

    // Handle initial load with hash
    window.addEventListener('load', function() {
        const hash = window.location.hash.slice(1);
        if (hash && document.getElementById(hash)) {
            switchSection(hash);
        }
    });

    // Add smooth scrolling for all anchor links
    document.querySelectorAll('a[href^="#"]').forEach(anchor => {
        anchor.addEventListener('click', function(e) {
            const href = this.getAttribute('href');
            if (href !== '#' && href.length > 1) {
                e.preventDefault();
            }
        });
    });

    // Add keyboard navigation
    document.addEventListener('keydown', function(e) {
        // Alt + 1-4 to switch between sections
        if (e.altKey) {
            const sectionMap = {
                '1': 'messaging',
                '2': 'demand-gen',
                '3': 'adoption',
                '4': 'sales'
            };

            const targetSection = sectionMap[e.key];
            if (targetSection) {
                e.preventDefault();
                switchSection(targetSection);
                history.pushState(null, null, `#${targetSection}`);
            }
        }
    });

    // Add console message for developers
    console.log('%c🚀 GTM Strategy Dashboard', 'color: #2563eb; font-size: 20px; font-weight: bold;');
    console.log('%cKeyboard shortcuts: Alt+1, Alt+2, Alt+3, Alt+4 to navigate sections', 'color: #10b981;');
});

// Add animation on scroll for cards (optional enhancement)
function addScrollAnimations() {
    const observerOptions = {
        threshold: 0.1,
        rootMargin: '0px 0px -50px 0px'
    };

    const observer = new IntersectionObserver(function(entries) {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.style.opacity = '1';
                entry.target.style.transform = 'translateY(0)';
            }
        });
    }, observerOptions);

    // Observe all cards
    document.querySelectorAll('.card').forEach(card => {
        card.style.opacity = '0';
        card.style.transform = 'translateY(20px)';
        card.style.transition = 'opacity 0.5s ease, transform 0.5s ease';
        observer.observe(card);
    });
}

// Initialize scroll animations after a short delay
setTimeout(addScrollAnimations, 100);
