# 🛒 MyAwsome Cart — Django E-Commerce Web Application

> A full-stack e-commerce web application built with Django, featuring product browsing, category filtering, order management, a contact form, and an integrated blog — backed by SQLite and Django's built-in ORM and admin panel.

---

## 🌐 Project Overview

MyAwsome Cart is a complete online shopping application developed using the Django MVT (Model-View-Template) architecture. It covers the full customer journey — from browsing products by category to placing an order and tracking its status — along with a blog section and a contact page, all managed through Django's powerful admin interface.

---

## ✨ Features

### 🏪 Product Catalogue
- Browse products with name, category, subcategory, price, and product image
- Individual product detail view (`prodView.html`)
- Search functionality to filter products (`search.html`)

### 🛍️ Shopping & Orders
- Checkout flow with customer details (name, phone number, delivery address)
- Order amount calculation stored per order
- Order status tracking — customers can follow up on their order via `tracker.html`
- Order update management (incremental schema evolution tracked across migrations)

### 📬 Contact Form
- Dedicated contact page (`contact.html`) with a database-backed `Contact` model for storing enquiries

### 📝 Blog
- Blog listing page showing all posts with thumbnails and publish dates
- Individual blog post view with structured heading + content sections (`head0/chead0`, `head1/chead1`, `head2/chead2`)
- Posts managed entirely through the Django Admin panel

### 🔧 Django Admin
- All models (`Product`, `Order`, `Contact`, `Blogpost`) registered in the admin panel for easy content management without a separate CMS

---

## 🏗️ Database Schema (via Django Migrations)

The database was built iteratively using Django's migration system — 7 migrations in total, reflecting real-world iterative development:

| Migration | Change |
|---|---|
| `0001_initial` | Initial `Product` model (name, description) |
| `0002` | Added `category`, `subcategory`, `image`, `price` to Product |
| `0003` | Added `Contact` model |
| `0004` | Added `Orders` model (customer name, address, email) |
| `0005` | Added `phone` field to Orders |
| `0006` | Added `order status` (OrderUpdate model) |
| `0007` | Added `amount` field to Orders |

---

## 🛠️ Tech Stack

| Category | Details |
|---|---|
| Backend Framework | Django 4.x (Python) |
| Architecture | MVT — Models, Views, Templates |
| Database | SQLite3 (via Django ORM) |
| Frontend | HTML5, CSS3 (Django templating engine) |
| Admin Panel | Django Admin (built-in) |
| Image Handling | Django `ImageField` with `upload_to` |
| Language Split | Python 21% · HTML 79% |

---

## 📁 Project Structure

```
myawsome-cart/
│
├── models.py               # Blogpost model (ORM definition)
├── views.py                # View functions — index & blogpost detail
├── urls.py                 # URL routing (blog home + post by ID)
├── admin.py                # Admin registration for Blogpost
├── apps.py                 # App config
├── tests.py                # Test suite scaffold
├── manage.py               # Django management CLI
├── db.sqlite3              # SQLite database
│
├── migrations/             # 7 incremental schema migrations
│   ├── 0001_initial.py
│   ├── 0002_product_category_...
│   ├── 0003_contact.py
│   ├── 0004_orders.py
│   ├── 0005_orders_phone.py
│   ├── 0006_orderupdate.py
│   └── 0007_orders_amount.py
│
└── templates/              # Django HTML templates
    ├── index.html          # Homepage / product listing
    ├── prodView.html       # Single product detail page
    ├── search.html         # Product search results
    ├── checkout.html       # Order placement form
    ├── tracker.html        # Order status tracker
    ├── contact.html        # Contact form page
    ├── about.html          # About page
    ├── blogpost.html       # Individual blog post
    ├── basic.html          # Base/layout template
    └── manage.py
```

---

## 💡 Key Skills Demonstrated

- **Django MVT architecture** — clean separation of models, views, and templates
- **Django ORM** — defining models, querying with `.objects.all()` and `.filter()`, and managing relational data without raw SQL
- **Database migrations** — iterative schema design using `makemigrations` / `migrate`, mimicking a real agile development workflow
- **Django Admin** — registering models for rapid content management
- **URL routing** — dynamic URL patterns with path parameters (e.g. `blogpost/<int:id>`)
- **Template rendering** — passing QuerySets from views to HTML templates using Django's context system
- **Full-stack web development** — end-to-end ownership from database schema to rendered HTML pages
- **E-commerce domain knowledge** — modelling real-world entities: products, categories, orders, order status, customer contact

---

## 🚀 How to Run Locally

**Prerequisites:** Python 3.8+, pip

```bash
# Clone the repository
git clone https://github.com/deepak-jadhav1/myawsome-cart.git
cd myawsome-cart

# Install dependencies
pip install django pillow

# Apply database migrations
python manage.py migrate

# Create a superuser (for Admin access)
python manage.py createsuperuser

# Run the development server
python manage.py runserver
```

Then visit:
- **Store:** `http://127.0.0.1:8000/`
- **Admin Panel:** `http://127.0.0.1:8000/admin/`

---

## 🔮 Potential Improvements

- Add user authentication (login, registration, order history per user)
- Integrate a payment gateway (Razorpay / Stripe)
- Add a shopping cart with session management
- Implement product search with filters (price range, category)
- Migrate from SQLite to PostgreSQL for production readiness
- Deploy to a cloud platform (Heroku, Railway, or AWS EC2)
