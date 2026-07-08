const input = document.getElementById("taskInput");
const addBtn = document.getElementById("addBtn");
const taskList = document.getElementById("taskList");
const taskCounter = document.getElementById("taskCounter");
const searchInput = document.getElementById("searchInput");
const allBtn = document.getElementById("allBtn");
const completedBtn = document.getElementById("completedBtn");
const pendingBtn = document.getElementById("pendingBtn");

// Load tasks from Local Storage
let tasks = JSON.parse(localStorage.getItem("tasks")) || [];

let currentFilter = "all";

// Display tasks when the page loads
renderTasks();

addBtn.addEventListener("click", addTask);
searchInput.addEventListener("input", renderTasks);

allBtn.addEventListener("click", () => {
    currentFilter = "all";
    renderTasks();
});

completedBtn.addEventListener("click", () => {
    currentFilter = "completed";
    renderTasks();
});

pendingBtn.addEventListener("click", () => {
    currentFilter = "pending";
    renderTasks();
});

// Press Enter to add a task
input.addEventListener("keypress", function (event) {
    if (event.key === "Enter") {
        addTask();
    }
});

function addTask() {
    const taskText = input.value.trim();

    if (taskText === "") {
        alert("Please enter a task!");
        return;
    }

    tasks.push({
        text: taskText,
        completed: false
    });

    saveTasks();
    renderTasks();

    input.value = "";
}

function renderTasks() {
    const searchText = searchInput.value.toLowerCase();
    taskList.innerHTML = "";

    tasks.forEach((task, index) => {

        if (!task.text.toLowerCase().includes(searchText)) {
            return;
        }
        
        if (currentFilter === "completed" && !task.completed) {
            return;
        }

        if (currentFilter === "pending" && task.completed) {
            return;
        }

        const li = document.createElement("li");

        if (task.completed) {
            li.classList.add("completed");
        }

       li.innerHTML = `
    <span>${task.text}</span>

    <div class="buttons">
        <button class="edit">Edit</button>
        <button class="delete">Delete</button>
    </div>
     `;

        // Complete task
        li.querySelector("span").addEventListener("click", () => {
            tasks[index].completed = !tasks[index].completed;
            saveTasks();
            renderTasks();
        });

        // Delete task
        li.querySelector(".delete").addEventListener("click", () => {
            tasks.splice(index, 1);
            saveTasks();
            renderTasks();
        });

       // Edit task
       li.querySelector(".edit").addEventListener("click", () => {

          const updatedTask = prompt("Edit your task:", task.text);

          if (updatedTask !== null && updatedTask.trim() !== "") {
          tasks[index].text = updatedTask.trim();

          saveTasks();
          renderTasks();
      }

 });

        taskList.appendChild(li);
    });
    showTasks();
}

function showTasks(){
    let comp=0;
    let pending=0;
    const len = tasks.length;
    for(let i=0 ; i<len ; i++){
       if(tasks[i].completed){
           comp+=1;
       }
    }
    pending = len - comp;

    taskCounter.textContent =
    `Total: ${len} | Completed: ${comp} | Pending: ${pending}`;
}

function saveTasks() {
    localStorage.setItem("tasks", JSON.stringify(tasks));
}