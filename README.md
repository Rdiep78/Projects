# GTM Strategy Dashboard

A modern, interactive web application for displaying and organizing your Go-To-Market strategy.

## Overview

This web app provides a clean, organized view of your GTM strategy across four key areas:
- **Messaging and Positioning** - Value proposition, target audience, and key messages
- **Demand Generation** - Marketing campaigns, content strategy, and lead generation
- **Adoption and Retention** - Onboarding, engagement, and customer success
- **Sales Enablement** - Playbooks, positioning, and sales collateral

## Features

- 📱 **Responsive Design** - Works seamlessly on desktop, tablet, and mobile
- 🎨 **Modern UI** - Clean, professional interface with smooth animations
- ⌨️ **Keyboard Navigation** - Use Alt+1, Alt+2, Alt+3, Alt+4 to switch sections
- 🔗 **Deep Linking** - Share specific sections with URL hashes
- 🖨️ **Print-Friendly** - Optimized for printing or PDF export

## Getting Started

### View Locally

1. Clone this repository
2. Open `index.html` in your web browser
3. No build process or dependencies required!

### Deploy to GitHub Pages

1. Go to your repository settings
2. Navigate to **Pages** section
3. Under "Source", select the branch (e.g., `claude/setup-gtm-strategy-app-01CDUUJXz2TgKWoYh1hUwWDA`)
4. Select the root folder `/`
5. Click **Save**
6. Your site will be published at `https://[username].github.io/[repository-name]`

## Customization

### Update Content

Edit `index.html` to customize the content for each section. Each section is structured as:

```html
<div class="card">
    <h3>Card Title</h3>
    <div class="card-content">
        <p>Description</p>
        <ul>
            <li>Item 1</li>
            <li>Item 2</li>
        </ul>
    </div>
</div>
```

### Modify Styling

Edit `styles.css` to change colors, fonts, or layout. Key CSS variables are defined at the top:

```css
:root {
    --primary-color: #2563eb;
    --secondary-color: #10b981;
    /* Add your brand colors */
}
```

### Extend Functionality

Edit `script.js` to add new interactive features or modify navigation behavior.

## Technology Stack

- **HTML5** - Semantic markup
- **CSS3** - Modern styling with CSS Grid and Flexbox
- **Vanilla JavaScript** - No frameworks required
- **GitHub Pages** - Free hosting

## Browser Support

Works in all modern browsers:
- Chrome/Edge (latest)
- Firefox (latest)
- Safari (latest)
- Mobile browsers

## Project Structure

```
.
├── index.html          # Main HTML file
├── styles.css          # Styling
├── script.js           # Interactivity
├── README.md           # This file
└── CLAUDE.MD           # Project documentation
```

## Tips

- **Navigation**: Click the nav menu or use Alt+1-4 keyboard shortcuts
- **Sharing**: Copy the URL with the section hash (e.g., `#demand-gen`) to share specific sections
- **Printing**: Use your browser's print function - the layout is optimized for printing
- **Updates**: Simply edit the HTML and push to your repository - changes appear instantly on GitHub Pages

## Future Enhancements

Consider adding:
- Data visualization charts
- Export to PDF functionality
- Integration with CRM/marketing tools
- Collaborative editing features
- Analytics dashboard
- Version history tracking

## License

This project is open source and available for personal and commercial use.

## Support

For questions or issues, please refer to the repository issues page or consult the CLAUDE.MD file for more detailed documentation.
