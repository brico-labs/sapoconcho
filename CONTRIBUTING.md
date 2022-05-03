# Edit documentation
If you want to edit this documentation you can clone the repo and do it locally. To see the result you can install mkdocs
```
pip install mkdocs
```
and serve the site locally
```
mkdocs serve
```

## Upload site
Updating main branch will trigger the auto-update of the site so will be forbidden and all changes must be made with a pull request with the following procedure:  
Create a new branch:
```
git checkout -b nameYourBranch
```
Modify the docs you want.
```
git add --all
git commit -m "your comment"
git push origin nameYourBranch
```
After pushing your branch you can create a Pull request on main and request a review to any of the maintainers.  

NOTE: If you are not a member of bricolabs organization you will have to create a fork first.