from django.db import models

# Create your models here.
class Contact(models.Model):
    pame = models.CharField(default='', max_length=123)
    phone = models.CharField(default='', max_length=12) 
    email = models.EmailField()
    desc = models.TextField()