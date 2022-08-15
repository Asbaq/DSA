from django.shortcuts import render, HttpResponse
from django.http.response import HttpResponse
from Home .models import Contact

# Create your views here.
def Home(request):
    return render(request, 'index.html')

def about(request):
    return render(request, 'about.html')

def Contact(request):
    if request.method == 'POST':
        name = request.POST['name']
        phone = request.POST['phone']
        email = request.POST['email']
        desc = request.POST['desc']
        c  = Contact(name=name, phone=phone, email=email, desc=desc)
        c.save()
    return render(request, 'Contact.html')