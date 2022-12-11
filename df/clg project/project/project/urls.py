"""project URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/4.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path
from clgapp import views
from django.conf.urls.static import static
from django.conf import settings


urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home,name='home'),
    path('men/', views.men,name='men'),
    path('women/', views.women,name='women'),
    path('shesneaker/', views.shesneaker,name='shesneaker'),
    path('menformal/', views.menformal,name='menformal'),
    path('womenformal/', views.womenformal,name='womenformal'),
    path('sneaker/', views.sneaker,name='sneaker'),
    path('detailpage/<int:id>/', views.detail,name='detailpage'),
    path('detail1/', views.detail1,name='detail1'),
    path('add-to-cart/', views.add_to_cart,name='add_to_cart'),
    path('cart/', views.show_cart,name='showcart'),
    path("register/", views.register_request, name="register"),
    path("logout/", views.logout_view),
    path("login/", views.login_request, name="login"),
    path("pluscart/", views.plus_cart),
    path("minuscart/", views.minus_cart),
    path("removecart/", views.remove_cart),
    path("checkout/", views.checkout),
    path("paymentdone/", views.payment_done,name='paymentdone'),
    path("orders/", views.orders,name='orders'),
    path("address/", views.address,name='address'),
    path("profile/", views.ProfileView.as_view(),name='profile'),
    path("forgotpaaword/", views.fgpassword),
    path("faq/", views.faq,name='faq'),
    path("faqfetch/", views.faqfetch,name='faqfetch'),
]+static(settings.MEDIA_URL,document_root=settings.MEDIA_ROOT)
